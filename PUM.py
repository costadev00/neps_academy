# /*

# */
# #include <stdio.h>
# #include <stdlib.h>
# int main()
# {
#     int n, j = 0, count = 0;
#     scanf("%d", &n);
#     for (int i = 0; i < n; i++)
#     {
#         j = 0;
#         while (j < 3)
#         {
#             count++;
#             printf("%d ", count);
#             j++;
#         }
#         count++;
#         printf("PUM\n");
#     }
#     return 0;
# }


j = 0
count = 0
n = int(input())
for i in range(n):
    j = 0
    while j < 3:
        count += 1
        print(count, end=" ")
        j += 1
    count += 1
    print("PUM")