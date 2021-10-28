#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
 int N;
 cin >> N;
 
 int * results = new int[N];
 for (int i=0; i<N; i++)
 {
  int days, nParties, wastedDays=0;
  cin >> days >> nParties;
  int * hartals = new int[nParties];
  for (int j=0; j<nParties; j++)
      cin >> hartals[j];
  for (int j=0,daysPassed=1; daysPassed<=days; j++, j%= 7,daysPassed++)
   if ((j != 5) && (j != 6))
         for (int k=0; k<nParties; k++)
     if (!(daysPassed % hartals[k]))
     { wastedDays++; break;}
  results[i] = wastedDays;
 
 }
 
 for (int i=0; i<N; i++) cout << results[i] << endl;
 return 0;
}
