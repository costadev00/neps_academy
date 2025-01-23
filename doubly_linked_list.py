class Node:
    def __init__(self, val=0, next=None, prev=None):
        self.val = val
        self.next = next
        self.prev = prev

class LinkedList:
    def __init__(self):
        self.head = None
        self.tail = None

    def get(self, index: int) -> int:
        curr = self.head
        for i in range(index):
            if curr == None:
                return -1
            curr = curr.next
        return curr.val if curr else -1

    def addAtHead(self, val: int) -> None:
        new_node = Node(val)
        if not self.head:
            self.head = new_node
            self.tail = new_node
        else:
            new_node.next = self.head
            self.head.prev = new_node
            self.head = new_node

    def addAtTail(self, val: int) -> None:
        new_node = Node(val)
        if not self.tail:
            self.head = new_node
            self.tail = new_node
        else:
            new_node.prev = self.tail
            self.tail.next = new_node
            self.tail = new_node

    def addAtIndex(self, index: int, val: int) -> None:
        if index == 0:
            self.addAtHead(val)
            return
        new_node = Node(val)
        curr = self.head
        for i in range(index - 1):
            if curr is None:
                return
            curr = curr.next
        if curr is None:
            return
        new_node.next = curr.next
        new_node.prev = curr
        if curr.next:
            curr.next.prev = new_node
        curr.next = new_node
        if new_node.next is None:
            self.tail = new_node

    def deleteAtIndex(self, index: int) -> None:
        if index == 0:
            if self.head:
                self.head = self.head.next
                if self.head:
                    self.head.prev = None
                else:
                    self.tail = None
            return
        curr = self.head
        for i in range(index - 1):
            if curr is None or curr.next is None:
                return
            curr = curr.next
        if curr.next:
            curr.next = curr.next.next
            if curr.next:
                curr.next.prev = curr
            else:
                self.tail = curr

# Example usage:
# ["MyLinkedList", "addAtHead", "addAtTail", "addAtIndex", "get", "deleteAtIndex", "get"]
# [[], [1], [3], [1, 2], [1], [1], [1]]
obj = LinkedList()
obj.addAtHead(1)
obj.addAtTail(3)
obj.addAtIndex(1, 2)
print(obj.get(1))  # Should print 2
obj.deleteAtIndex(1)
print(obj.get(1))  # Should print 3