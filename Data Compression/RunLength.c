#include<stdio.h>
#define MAX 1000  //represents size of array

int main()
{
    char str[MAX];
    printf("Enter a string to compress:\n");
    gets(str);

    //Assuming 1st letter as current letter and freq = 1
    char current = str[0];
    int freq = 1, totalCount = 1, ansCount = 2;

    for(int i=1;str[i]!='\0';i++)
    {
        totalCount++;
        if(str[i] == current)
        {
            freq++;
        }
        else{
            printf("%c%d",current,freq);
            ansCount += 2;
            if(freq>9){
                ansCount = ansCount + 1;
            }
            current = str[i];
            freq = 1;
        }
    }
    printf("%c%d",current,freq);
    printf("\n\nThe size of the original string was: %d bytes\n",totalCount);
    printf("The size of the encoded string is: %d bytes\n\n",ansCount);

    if(ansCount > totalCount)
        printf("Negative Compression!!\n");
        else
            printf("The size of the string has been reduced to %d bytes from %d bytes.\n", ansCount, totalCount);

    return 0;
}