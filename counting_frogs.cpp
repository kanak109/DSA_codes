//#include<stdio.h>
//
//int main()
//{
//    int x,y,s,t, count;
//    scanf("%d %d %d %d", &x,&y,&s,&t);
//
//    int a = x+s;
//    int b = y+s;
//
//    for(int i=x;i<=a;i++){
//        for(int j=y;j<=b;j++){
//                if(i+j <= t){
//                    count++;
//                }
//
//        }
//    }
//    printf("%d", count);
//
//    return 0;
//
//}

#include <bits/stdc++.h>

using namespace std;

int main()

{

    int x, y, s, t;

    cin>>x>>y>>s>>t;

    if(x+y <= t)

    {

        int ans = 0;

        for(int i = 0; i<=s; i++)

        {

            for(int j = 0; j<=s; j++)

            {

                if(i+j <= (t-x-y)){
                    ans++;
                    printf("Co-ordinates: %d, %d\n", i,j);
                }



            }

        }

        cout<<ans;

    }

    else

    {

        cout<<0;

    }

}
