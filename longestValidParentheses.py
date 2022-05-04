class Solution:
    def longestValidParentheses(self, s: str) -> int:
        stack = []
        stack.append((-1,"{"))
        
        for i in range(len(s)):
            if stack[-1][1] == "(" and s[i] == ")":
                stack.pop()
            else:
                stack.append((i,s[i]))
        
        stack.append((len(s),"}"))
        
        longest = 0
        for j in range(1,len(stack)):
            longest = max(stack[j][0] - stack[j - 1][0] - 1,longest)
        
        return longest
