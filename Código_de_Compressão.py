n = int(input())
s = input()

#RLE compression on string s

#initialize the compressed string
comp = ""
#initialize the count of the current character
count = 1
#initialize the previous character
prev = s[0]
#iterate through the string
for i in range(1,n):
    #if the current character is the same as the previous character
    if s[i] == prev:
        #increment the count of the current character
        count+=1
    #if the current character is different from the previous character
    else:
        #add the previous character to the compressed string
        comp+=prev
        #add the count of the previous character to the compressed string
        comp+=str(count)
        #update the previous character
        prev = s[i]
        #reset the count of the current character
        count = 1
#add the last character to the compressed string
comp+=prev
#add the count of the last character to the compressed string
comp+=str(count)



print(comp)
# Time: O(n)
