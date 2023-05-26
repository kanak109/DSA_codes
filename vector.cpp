#include<iostream>
#include<string>
#include<vector>
#include<iterator>

using namespace std;

int main()
{
    vector <int> v1;
    vector <int>::iterator it1;
//    vector <int> v1(5, -2);
//    v1.push_back(34);
//    v1.push_back(35);
//    v1.push_back(36);

    //printf("%d\n", v1[0]);

    for(int i=1;i<=5;i++){
        v1.push_back(i);
    }

    for(int i=0;i<v1.size();i++){
        cout<< v1[i]<< "\t" ;
    }

    cout<<endl ;

    for(it1=v1.begin();it1!=v1.end();it1++){
        cout<< "Vector values: "<< *it1 <<endl ;
    }

    return 0;
}
