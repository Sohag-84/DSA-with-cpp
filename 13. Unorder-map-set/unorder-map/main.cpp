#include<bits/stdc++.h>
using namespace std;

unordered_map<int, string> umap;

int main(){
    umap[12] = "Peash";
    umap[13] = "Nahid";
    umap[14] = "Yakub";
    umap[15] = "Porosh";
    umap[16] = "Sakib";
    for(auto name: umap){
        cout<<name.first<<endl;
        cout<<name.second<<endl;
    }
    return 0;
}