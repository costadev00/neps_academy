class Solution:
    def isValid(self, s: str) -> bool:
        mp = {'{': '}', '[': ']', '(': ')'}
        stack = []
        if len(s)<=1 or s[0] not in mp:
            return False
    
        for c in s:
            if c not in mp:
                if stack and mp[stack[-1]] == c:
                    stack.pop()
                else:
                    return False
            elif c in mp:
                stack.append(c)
        if stack:
            return False
        return True 