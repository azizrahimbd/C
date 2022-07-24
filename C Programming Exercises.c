#include<stdio.h>
/* https://atcoder.jp/contests/abc227/tasks/abc227_a?lang=en
We will hand out a total of K cards to N people numbered 1,2,…,N.

Beginning with Person A, we will give the cards one by one to the people in this order:
A,A+1,A+2,…,N,1,2,…. Who will get the last card?
Formally, after Person x(1≤x<N) gets a card, Person x+1 will get a card. After Person
N gets a card, Person 1 gets a card.*/
int main()
{
    int N,K,A,i;
    scanf("%d %d %d", &N, &K, &A);
    int l_g = 0;
    for (int i = 1, cnt = A ; i <= K; i++,cnt++) {
            if(cnt>N){
                cnt = 1;
            }
            l_g = cnt;
    }
    printf("%d", l_g);
    return 0;
}
