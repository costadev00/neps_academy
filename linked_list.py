class Node:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class MyLinkedList:
    def __init__(self):
        self.head = None

    def get(self, index: int) -> int:
        curr = self.head
        for i in range(index):
            if curr is None:
                return -1
            curr = curr.next
        return curr.val if curr else -1

    def addAtHead(self, val: int) -> None:
        new_node = Node(val)
        new_node.next = self.head
        self.head = new_node

    def addAtTail(self, val: int) -> None:
        new_node = Node(val)
        if not self.head:
            self.head = new_node
            return
        curr = self.head
        while curr.next:
            curr = curr.next
        curr.next = new_node

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
        curr.next = new_node

    def deleteAtIndex(self, index: int) -> None:
        if index == 0:
            if self.head:
                self.head = self.head.next
            return
        curr = self.head
        for i in range(index - 1):
            if curr is None or curr.next is None:
                return
            curr = curr.next
        if curr.next:
            curr.next = curr.next.next

# Example usage:
# ["MyLinkedList", "addAtHead", "addAtTail", "addAtIndex", "get", "deleteAtIndex", "get"]
# [[], [1], [3], [1, 2], [1], [1], [1]]
obj = MyLinkedList()
print(obj.addAtHead(1))
print(obj.addAtTail(3))
print(obj.addAtIndex(1, 2))
print(obj.get(1))  # Should print 2
print(obj.deleteAtIndex(1))
print(obj.get(1))  # Should print 3