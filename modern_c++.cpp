     //Uniqe_ptr  

//EASY

// #include <iostream>
// #include <memory>            //for using ptr's 
// using namespace std;

// int main(){
//     unique_ptr<int> a = make_unique<int>(7); // create a
//     unique_ptr<int> b = move(a);     // move from a to b and delete a value 
//     cout << a.get() << endl;
//     cout << *b << endl;
//     return 0;
// }

//MEDIUM

// #include <iostream>
// #include <memory>
// using namespace std;

// unique_ptr<int> print(unique_ptr<int> a){
//     cout << *a << endl;
//     return a;
// }
// int main(){
//  unique_ptr<int> a = make_unique<int>(10);
//  a = print(move(a));
//  cout << *a << endl;
//  return 0;
// }

//HARD


// #include <iostream>
// #include <memory>
// using namespace std;

// class Resource{
//     private:
//     unique_ptr<int> a;
   
//     public:
//     Resource(int value): a(make_unique<int>(value)){}
//         void print() {cout << *a << endl;}
// };

// int main(){  
//     Resource r(32);
//     Resource f(123);
//     f.print();
//     r.print();
//     return 0;
// }

//ADVANCE

// #include <iostream>
// #include <vector>
// #include <memory>
// using namespace std;

// class Manager{
//     private:
//     vector<unique_ptr<int>> vu;
//     public:
//     Manager() {
//         for(int i = 1;i<=5;++i){
//             vu.push_back(make_unique<int>(i));
//         }
        
//     }
//     void printall() const{
//         for(const auto& pr : vu){
//             cout << *pr << " ";
//         }
//             cout << endl;
//         }
// };

// int main(){
    
//     Manager m;
//     m.printall();
//     return 0;
// }

//Shared_ptr

//EASY

// #include <iostream>
// #include <memory>
// using namespace std;

// int main(){
//     shared_ptr<int> p = make_shared<int>(50);
//     shared_ptr<int> c = p;
//     cout << c.use_count() << endl;
//     cout << p.use_count() << endl;

//     return 0;
// }

// #include <memory>
// #include <iostream>
// using namespace std;

// int main(){
//     shared_ptr<int> m = make_shared<int>(5);
//     shared_ptr<int> c = m;
//     cout << m.use_count() << endl;
//     shared_ptr<int> d = m;
//     cout << m.use_count() << endl;
//     c.reset();
//     cout << m.use_count() << endl;

//     return 0;
// }

//HARD

// #include <memory>
// #include <iostream>
// using namespace std;

// struct Sh2;

// struct Sh1{
//     shared_ptr<Sh2> ptr;
//     ~Sh1(){
//         cout << "SH1 Destroyed!" << endl;
//     }
// };
// struct Sh2{
//     weak_ptr<Sh1> ptr;
//     ~Sh2(){
//         cout << "SH2 Destroyed!" << endl;
//     }
// };
// int main(){
//     auto s1 = make_shared<Sh1>();
//     auto s2 = make_shared<Sh2>();

//     s1->ptr = s2;
//     s2->ptr = s1; 

//     return 0;
// }