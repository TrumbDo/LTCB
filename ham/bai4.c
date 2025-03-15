#include <stdio.h>
void nhap(int arr[3][3]){
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
}
int main()
{
    int a[3][3];
    int b[3][3];
    nhap(a);
    nhap(b);
}