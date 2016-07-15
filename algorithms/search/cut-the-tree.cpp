#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int colSZ = 100001, n, total_sum;

set < pair < int, int> > links;
vector< int > visited(colSZ, 0);
vector< int > weights(colSZ, 0);
vector< int > summed_weights_below(colSZ, 0);
vector< int > summed_weights;


int prr(){
    std::set< pair < int, int> >::iterator it;
    for (it = links.begin(); it != links.end(); ++it)
    {
        int first_ind=(*it).first;
        int second_ind=(*it).second;
        cout <<first_ind<<" "<<second_ind<<endl;
        // if (!visited[first_ind])  summed_weights_below[from_index]+= Depth_First_Search_Recursive(first_ind);
        // if (!visited[second_ind]) summed_weights_below[from_index]+= Depth_First_Search_Recursive(second_ind);
    }
}

int Depth_First_Search_Recursive(int from_index){
    int sum_below = 0, first_ind, second_ind;

    visited[from_index]=1;
    vector < pair < int, int> > linksvector(links.begin(), links.end());

    for(int i=0;i<linksvector.size();i++)
    {
        if (linksvector[i].first==from_index){
            if (!visited[linksvector[i].first])  summed_weights_below[from_index]+= Depth_First_Search_Recursive(linksvector[i].first);
        }

        if (linksvector[i].second==from_index){
            if (!visited[linksvector[i].second])  summed_weights_below[from_index]+= Depth_First_Search_Recursive(linksvector[i].second);
        }
    }





    // cout<<"weights["<<from_index<<"] = "<<weights[from_index]<<endl;
    return weights[from_index];
}

int main(){
    cin>>n;
    //input weight and sumup
    for(int i=0;i<n;i++){
        cin>>weights[i];
        total_sum+=weights[i];
    }

    //read connections, from both sides. if read 3,5; insert 3,5 and 5,3
    int first_ind,second_ind;
    for(int i=1;i<n;i++){
        cin>>first_ind>>second_ind;
        links.insert(make_pair(first_ind,second_ind));
        links.insert(make_pair(second_ind,first_ind));
    }

    //calculate difference from total_sum
    // for(int i=0;i<n;i++){
    //     summed_weights.push_back(abs(total_sum-Depth_First_Search_Recursive(i)));
    // }


    prr();
    cout<<"links"<<endl<<endl;

    // for(int i=0;i<n;i++) Depth_First_Search_Recursive(i);
    Depth_First_Search_Recursive(0);
    // Depth_First_Search_Recursive(1);
    cout<<"rec"<<endl<<endl;



    for(int i=0;i<n;i++) cout<<weights[i]<<endl;
    cout<<"weights"<<endl<<endl;

    for(int i=0;i<n;i++) cout<<visited[i]<<endl;
    cout<<"visited"<<endl<<endl;

    for(int i=0;i<n;i++) cout<<summed_weights_below[i]<<endl;
    cout<<"summed_weights_below"<<endl<<endl;

    vector < pair < int, int> > linksvector(links.begin(), links.end());
    for(int i=0;i<n;i++) cout<<linksvector[i].first<<" "<<linksvector[i].second<<endl;
    cout<<"linksvector"<<endl<<endl;

    // sort(summed_weights_below.begin(), summed_weights_below.end());
    // for(int i=0;i<n;i++) cout<<summed_weights_below[i]<<endl;
    // cout<<summed_weights_below[1];
    return 0;


}
