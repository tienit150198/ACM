#include <bits/stdc++.h>
#define ll long long int
#define ipair pair<ll,ll>
using namespace std;

class node{
public:
    ipair data;
    node *left, *right;
    node(ipair u){
        this->data = u;
        left = NULL;
        right = NULL;
    }
};

class tree{
public:
    node *root;
    tree(){
        root = NULL;
    }
    tree(node *root){
        this->root = root;
    }
    void addNode(ipair x);
    node* removeNode(node *root, ipair x);
    node* findInsert(node *root, ipair x);
    ll getHeight();
    ll countLef();
    void BFS();
    void DFS();
};

node* tree::findInsert(node *root, ipair x){
    if(root == NULL)
        return NULL;

    node *p = root;
    node *r = p;

    while(p != NULL){
        r = p;

        if(p->data < x){
            p = p->right;
        }
        else if(p->data > x)
            p = p->left;
        else
            return NULL;
    }
    return r;
}

void tree::addNode(ipair x){
    node* q = new node(x);
    if(this->root == NULL){
        this->root = q;
        return;
    }
    node *f = findInsert(this->root, x);

    if(f != NULL){
        if(f->data > x)
            f->left = q;
        else
            f->right = q;
    }
}

ll getUtil(node *a){
    if(!a)
        return 0;

    return max(getUtil(a->left), getUtil(a->right)) + 1;
}

ll tree::getHeight(){
    if(this->root == NULL)
        return 0;

    return getUtil(this->root);
}
ll tree::countLef(){
    stack<node*> q;

    q.push(this->root);
    ll c = 0;
    while(!q.empty()){
        node *t = q.top();
        q.pop();

        if(t->left != NULL){
            q.push(t->left);
        }
        if(t->right != NULL){
            q.push(t->right);
        }
        if(t->left == NULL && t->right == NULL)
            c++;
    }
    return c;
}

void tree::BFS(){
    queue<node *> q;

    q.push(this->root);

    while(!q.empty()){
        node *t = q.front();
        cout << t->data.first << " ";
        q.pop();

        if(t->left != NULL){
            q.push(t->left);
        }
        if(t->right != NULL){
            q.push(t->right);
        }
    }
    cout << endl;
}

void tree::DFS(){
    stack<node *> q;

    q.push(this->root);

    while(!q.empty()){
        node *t = q.top();
        cout << t->data.first << " ";
        q.pop();

        if(t->left != NULL){
            q.push(t->left);
        }
        if(t->right != NULL){
            q.push(t->right);
        }
    }
    cout << endl;
}

node * minValNode(node *p){
    node *q = p;
    while(q->left != NULL)
        q = q->left;
    return q;
}
/*
node* tree::removeNode(node *root, ipair x){
    if(root == NULL)
        return root;
    if(root->data > x){
        root->left.removeNode(root->left, root->data);
    }
    else if(root->data < x)
        this->root->right = tthis.removeNode(this->root->right->data);
    else{
        if(root->left == NULL){
            node *tmp = root->right;
            delete root;
            return tmp;
        }
        if(root->right == NULL ){
            node *tmp = root->left;
            delete root;
            return tmp;
        }

        node *tmp = minValNode(root->right);
        root->data = tmp->data;

        root->right = this.removeNode(root->data);
    }
    return root;
}
*/
int main()
{
    srand(time(NULL));
    tree t;
    ll n = 5;
    ll x;
    for(int i = 0 ; i < n; i++){
        x = rand()%30;
        cout << x << " ";
        ipair xx(x,0);
        t.addNode(xx);

    }
    t.addNode(make_pair(7,0));
    cout << endl;
    ipair xx(7,0);

    t.BFS();
    cout << t.countLef() << endl;
    cout << t.getHeight() << endl;

  //  t.removeNode(t,xx);

    t.BFS();

    return 0;
}
