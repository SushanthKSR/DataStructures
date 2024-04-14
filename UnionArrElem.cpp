#include <iostream>
#include <set>
#include <vector>

using namespace std;
std :: vector<int> unionArray(const std::vector<int>& arr1, const std::vector<int> arr2)
{
    std::set<int> unionSet;

    //Insert element from Arr1
    for(int elem: arr1){
        unionSet.insert(elem);
    }

    //Insert element from Arr2
    for(int elem: arr2){
        unionSet.insert(elem);
    }

    //Conver Set to Vector 
    std::vector<int> unionVector(unionSet.begin(), unionSet.end());
    return unionVector;

}

int main()
{
    
}