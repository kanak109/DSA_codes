#include<stdio.h>

int main()
{
    int adj[100][100] = {0};

    freopen("input.txt", "r", stdin);

    int node, edge, n1, n2;
    scanf("%d", &node);
    scanf("%d", &edge);

    for(int i=0; i<edge; i++)
    {
        scanf("%d %d", &n1, &n2);
        adj[n1][n2] = 1;
        adj[n2][n1] = 1;
    }

//    for(int i=0; i<node; i++)
//    {
//        for(int j=0; j<node; j++)
//        {
//            printf("%d\t", adj[i][j]);
//        }
//        printf("\n");
//    }
     for(int i=0;i<node;i++){

     }



    return 0;

}
