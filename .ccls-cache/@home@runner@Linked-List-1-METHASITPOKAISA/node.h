class node{
  private:
    int id;
	   string name; 
    node* next;
 public:
    node(int,string);
    void print();
    node* get_next();
    void set_next(node*);
   ~node();
     };



typedef node* nodePtr;

node::node(int i,string n){
  id=i;
  name=n;
  next=NULL;
}

void node::print(){
  cout<<"Name: "<<name<<endl;
  cout<<"ID: "<<id<<endl;
}

node::~node(){
  cout<<name<<"deleted"<<endl;
}

node* node::get_next(){
  return next;
}

void node::set_next(nodePtr x){
  next=x;
}

