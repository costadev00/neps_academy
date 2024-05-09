arr = input()
st = set()

for i in range(len(arr)):
    # print(arr[i])
    st.add(arr[i])

if len(st) >1:
    print(0)
else:
    print(1)