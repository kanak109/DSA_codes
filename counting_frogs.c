#include<stdio.h>

int main()
{
    int x,y,s,t, count=0;
    scanf("%d %d %d %d", &x,&y,&s,&t);

//    int a = x+s;
//    int b = y+s;

    for(int i=x;i<=x+s;i++){
        for(int j=y;j<=y+s;j++){
                if(i+j <= t){
                    count++;
                }

        }
    }
    printf("%d", count);

    return 0;

}

//
//#include<bits/stdc++.h>
//
//using namespace std;
//
//int main()
//
//{
//
//    int x,y,s,t;
//
//    cin>>x>>y>>s>>t;
//
//    t=t-(x+y);
//
//    if(t<0)
//
//    {
//
//        cout<<0;
//        exit(0);
//    }
//
//    s=s+1;
//
//    t=t+1;
//
//    int ans=0;
//
//    if(t>s)
//
//    {
//        if(t>=2*s)
//
//            ans=s*s;
//
//        else
//
//        {
//            int k=2*s-(t+1);
//            ans=(s*s)-(k*(k+1))/2;
//
//        }
//    }
//
//    else
//
//    {
//
//        ans=(t*(t+1))/2;
//
//    }
//
//        cout<<ans;
//
//}
