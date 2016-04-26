// https://www.hackerrank.com/challenges/virtual-functions

class Person {
public:
   virtual void getdata(){}
   virtual void putdata(){}

protected:
   int cur_id;
   int age;
   string name;

};

class Professor : public Person {
public:
   static int id;
   Professor(){
      cur_id=id;
      id++;
   }
   void getdata(){
      cin>>name;
      cin>>age;
      cin>>publications;
   }
   void putdata(){
      cout<<name<<" "<<age<<" "<<publications<<" "<<cur_id<<endl;
   }
private:
   int publications;

};

class Student : public Person {
public:
   static int id;
   Student(){
      markssum=0;
      cur_id=id;
      id++;
   }
   void getdata(){
      cin>>name;
      cin>>age;
      int i=0, mark;
      while(i<6){
         i++;
         cin>>mark;
         markssum+=mark;
      }
   }
   void putdata(){
      cout<<name<<" "<<age<<" "<<markssum<<" "<<cur_id<<endl;
   }
private:
   int markssum;


};

int Professor::id=1;
int Student::id=1;
