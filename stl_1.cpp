    // VECTOR

// #include <vector>
// #include <iostream>
// using namespace std;
// int main(){
//     vector<int> v{1,2,3,4,5};
//     v.push_back(6);
//     v.pop_back();
//     for(int a : v){
//         cout << a << endl;
//     }
//     return 0;
// }

    // LIST

// #include <iostream>
// #include <list>
// using namespace std;

// int main(){
//     list<int> l{10,20,30};
//     l.push_back(40);
//     l.push_front(5);
//     l.pop_front();
//     l.pop_back();
//     for(auto x : l){
//         cout << x << endl;
//     }
// }

    //SET + MAP 

// #include <iostream>
// #include <set>
// #include <map>
// #include <string>
// using namespace std;

// int main(){
//     set<int> s{3,1,4,1,5};
//     for(auto n : s){
//         cout << n << endl;
//     }
//     map<string,int> m = {{"Alice",25}, {"Bob",30}};
//     for(auto& p : m){
//         cout << "Name: " <<  p.first << " " <<" Age: " << p.second << endl;
//     }
//     return 0;
// }

    //Iterator
    
// #include <list>
// #include <iostream>
// using namespace std;

// int main(){
//     //1) 
//     // vector<int> v{1,2,3,4,5};
//     // for(auto it = v.begin();it != v.end(); ++it){
//     //     cout << ": Original : ";
//     //     cout << *it << endl;
//     //     *it *= 2;
//     //     cout << ": 2x of Original : ";
//     //     cout << *it << endl;
//     // }
//     //2)
//     list<int> l = {10,20,30,40};
//     cout << "Original list: ";
//     for(auto it = l.begin(); it!= l.end(); ++it){
//         cout << *it  << " ";
//     }
//     auto it = l.end();
//         --it;
//         cout << "Reverse: ";
//         while(true){
//             cout << *it << " ";
//             if(it == l.begin()) break;
//             --it;
//         }
    
//     return 0;
// }

    //Algorithms
//1)

// #include <algorithm>
// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     vector<int> v{4,1,3,2};
//     sort(v.begin(),v.end());
//     auto it = find(v.begin(),v.end(),3);
//     if(it!= v.end()){
//         cout << "find number";
//     }else cout << "Can't find number";
//     return 0;
// }

//2)

// #include <algorithm>
// #include <numeric>
// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     vector<int> v{1,2,2,3,2};
//     int c = count(v.begin(),v.end(),2);
//     int sum = accumulate(v.begin(),v.end(),0);
//     cout << "Count of 2: " << c << endl;
//     cout << "Sum of vector: " << sum << endl; 
//     return 0;
// }

//3)
// #include <algorithm>
// #include <iostream>
// #include <vector>
// using namespace std;

// void print(int x){cout <<  x << endl;}
// int main(){
//     vector<int> v{1,2,3,4,5};
//     for_each(v.begin(),v.end(),print);
//     for_each(v.begin(),v.end(),[](int& n){n *=2;});
//      for_each(v.begin(),v.end(),print);

//      return 0;
// }

//4)

// #include <algorithm>
// #include <iostream>
// #include <map>
// #include <set>
// using namespace std;

// int main(){
//     map<string,int> m{{"Alice",25},{"Bob",30},{"Carol",25}};
//     set<int> s;
//     for(auto &p : m){
//         s.insert(p.second);
//     }
//     for(auto it = s.begin();it != s.end();++it){
//         cout << *it << " " << endl;
//     }
//     return 0;
// }

//5

// #include <algorithm>
// #include <vector>
// #include <set>
// #include <map>
// #include <iostream>
// using namespace std;

// int main(){
//     vector<int> v{1,2,3,4,5,2,3,1};
//     set<int> s;
//     map<int,int> m;
//     for(auto p : v){
//         s.insert(p);
//         m[p]++;
//     }

//     for(auto &w : m){
//         cout << w.first << " " << w.second << endl;  
//     }
   
//     sort(v.begin(),v.end());
//     return 0;
// }
