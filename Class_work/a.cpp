  ostream & operator << (ostream &out,Employee &c){
    out<<" name of employee: "<<c.name<<endl;
    out<<" age of employee: "<<c.age<<endl;
    out<<" phone no. of employee: "<<c.phone_no<<endl;
    out<<"Job Post of employee: "<<c.job_post<<endl;
    return out;
 }