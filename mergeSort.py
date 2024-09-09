class Solution:
    def sortArray(self, nums):
        sz = len(nums)
        return self.mergeSort(nums, 0, sz-1)

    def mergeSort(self, arr, s, e):
        if e-s +1 <=1:
            return arr
        
        m = (s+e) //2

        self.mergeSort(arr, s, m)
        self.mergeSort(arr, m+1, e)

        self.merge(arr, s, m, e)

        return arr

    def merge(self, arr, s, m, e):
        L = arr[s:m+1]
        R = arr[m+1:e+1]

        i = 0
        j = 0
        k = s

        while i < len(L) and j < len(R):
            if L[i] <= R[j]:
                arr[k] = L[i]
                i += 1
            else:
                arr[k] = R[j]
                j += 1
            k += 1

        while i < len(L):
            arr[k] = L[i]
            i += 1
            k += 1

        while j < len(R):
            arr[k] = R[j]
            j += 1
            k += 1

s = Solution()
print(s.sortArray([5,2,3,1])) # [1,2,3,5]