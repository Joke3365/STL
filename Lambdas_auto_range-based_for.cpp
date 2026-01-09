// #include <algorithm>
// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     vector<int> v{1,2,3,4,5,6};
//     for_each(v.begin(),v.end(),[](int x){
//         if(x % 2 == 0){
//             cout << x << " ";
//         }
//         }
//     );
//     cout << endl;
    
//     return 0;
// }

//MEDIUM

// #include <algorithm>
// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     vector<int> v{1,2,3,4,5};
//     for(auto& x : v){
//         x *= 2;
//     }
//     for(auto c : v){
//         cout << c << endl;
//     }
//     return 0;
// }

//HARD

#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    vector<int> v{3,6,9,12,15};
    auto st = count_if(v.begin(),v.end(),[](int a){
        return a % 3 == 0;  
    });
    cout << st << endl;
    return 0;
}