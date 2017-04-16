#include<iostream>
#include<fstream>
#include<cstdlib>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
 int Num, i, Sum, W;
 vector<int> Cows;
 ifstream infile("filein", ios::in);
 if (!infile) {
    cerr<<"Failed opening"<<endl;
    exit(1);
   }
 
 infile>>Num;
 for (i=0; i<Num; ++i) {
     infile>>W;
     Cows.push_back(W);
    }
 sort(Cows.begin(), Cows.end());

 Sum=0;
 for (i=Num-1; i>=Num-5; --i)
     Sum+=Cows.at(i);

 cout<<Sum<<endl;

 return 0;
}
