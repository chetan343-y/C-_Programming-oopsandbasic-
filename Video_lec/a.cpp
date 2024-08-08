  ofstream my_file;
  my_file.open("my.txt");
//   cout<<"Hello"<<endl;
//   my_file<<endl<<"HELLO, Chetan Sharma";
for(int i=0;i<=10;i++){
    my_file<<i*i<<endl;
}
my_file<<"The Square of number fomr 1 to 10 above";
  my_file.close();