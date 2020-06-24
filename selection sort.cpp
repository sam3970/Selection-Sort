#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

/* 선택정렬 구현 부분 */
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
    
    /* sort를 쓰면 오름차순 정렬이 가능하다. 즉, 정렬 알고리즘보다 간편하게 값을 순차적으로 나열할 수 있다. */
    sort(vec.begin(), vec.end());
    selectionsort(vec);
    
    for(int i=0;i<vec.size();i++)
    {
        cout<<"value"<<"["<<i<<"]: "<<vec[i]<<endl;
    }
    
}
