#include<stdio.h>
int main()
{
    int a[10][10] = {0};
    int cnt = 1;
    int i = 0;
    int j = 0;
    int x = 0;
    for(x= 0 ;x < 5;x++)
    {
        i = 0;
        j = x;
        
        while(j >= 0)
            {
                if(x % 2 == 0)
                {
                    a[i][j] = cnt++; 
                }
                else
                {
                    a[j][i] = cnt++;
                }
               
                i++;
                j--;
            }
    }
    for(i = 0; i < 10;i++)
        {
            for(j = 0; j<= i ;j++)
                {
                    printf("%3d\n",a[i][j]);
                }
        }
    return 0;
}
