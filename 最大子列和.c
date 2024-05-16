#include<stdio.h>

int MaxSubseqSum4( int A[], int N ) {
    int ThisSum, MaxSum, i;
    
    ThisSum = 0;
    MaxSum = A[0];
    for( i = 0; i < N; i++ ) {
        ThisSum += A[i]; /* 向右累加 */
        if( ThisSum > MaxSum )
                MaxSum = ThisSum; /* ·发现更大和则更新当前结果 */
        if( ThisSum < 0 ) /* 如果当前子列和为负数 */
                ThisSum = 0; /* 则不可能使后面的部分和增大，抛弃之 */
    }
    
    return MaxSum;  
}

int main()
{
    int A[]={-10,4,9,-5,-6,-2};
    printf("%d",MaxSubseqSum4(A, 6));
    return 0;
}