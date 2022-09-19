#include "Parameter.hpp"

// export PATH="/usr/bin:/bin:/usr/sbin:/sbin:/usr/local/bin"

namespace {
   Fire fire(fireParameter);
};

map<MagicType,unique_ptr<Magic>> magics;

template<typename Iterator> 
float showAttackPower(Iterator it){
   return (it->second)->showAttackPower();
}
template<typename Iterator> 
void showMagicName(Iterator it){
   cout <<(it->second)->name() << endl;
}

void showAllElements(const MagicType magicType){
   auto usingMagic = magics.find(magicType); //map内のmagicTypeへのイテレータを返す
   showMagicName(usingMagic);
   cout << showAttackPower(usingMagic) << endl;
}

void setMap(){
    magics.emplace(MagicType::fire, new Fire(fireParameter));
   //  magics.emplace(MagicType::shiden, new Shiden);
}

vector<tuple<float, float>> data;

int main(){
    setMap();
    showAllElements(MagicType::fire);

   for(int i=0; i<3; i++){
      printState();
      ++state;
   }


   for(int i=0; i<10; i++){
      data.emplace_back(make_pair(i, sin(fire.showAttackPower()*i)));
   }
   //  showAllElements(MagicType::shiden);
   string output_csv_file_path = "/mnt/c/users/sakas/OneDrive - Tokyo University of Agriculture and Technology/csv/test.csv";
   std::ofstream outputfile(output_csv_file_path);
   if(outputfile.is_open()){
       for (auto &x : data) {
        outputfile << get<0>(x);
        outputfile << ',';
        outputfile << get<1>( x );
        outputfile << '\n';
      }
   }
//ファイルの出力
    outputfile.close();

    return 0;
}

// auto  itr = magics.find(MagicType::shiden);
// vector<unique_ptr<Magic>> v;
//  v.emplace_back(new Fire);
// cout << v[0]->name() << endl; //fire