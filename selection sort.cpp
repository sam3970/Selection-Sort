// Example program
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void selectionsort(vector<int> v)
{
    for(int i=0;i<v.size()-1;i++)
    {
        int tmp=i;
        for(int j=i+1;j<v.size();j++)
        {
            if(v[tmp]>=v[j])
                tmp=j;
        }
        swap(v[i],v[tmp]);
    }
}

int main()
{
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(6);
    vec.push_back(3);
    vec.push_back(5);
    
    sort(vec.begin(), vec.end());
    selectionsort(vec);
    
    for(int i=0;i<vec.size();i++)
    {
        cout<<"value"<<"["<<i<<"]: "<<vec[i]<<endl;
    }
    
}