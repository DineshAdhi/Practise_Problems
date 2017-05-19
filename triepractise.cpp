#include<iostream>
#include<stack>
#include<vector>
#include<map>
#define ALPHABET_NUM 26
using namespace std;
class node
{
public:
  char a;
  node *nodes[ALPHABET_NUM];
  bool leaf;
  map<char,int> m;
  node()
  {
    leaf = false;
    for(int i=0;i<ALPHABET_NUM;i++)
      nodes[i] = NULL;
  }
};

class trie
{
public:
  node *root;
  trie()
  {
    root= new node();
  }

  void insert(string s)
  {
    int i;
    node *temp = root;
    for(i=0;i<s.size();i++)
    {
      if(temp->nodes[s[i]-'a']==NULL)
      {
        temp->nodes[s[i]-'a'] = new node();
        temp->nodes[s[i]-'a']->a = s[i];
        temp->m[s[i]-'a']++;
      }
      temp = temp->nodes[s[i]-'a'];
    }
    temp->leaf = true;
  }

  bool search(string s)
  {
    int i;
    node *temp = root;
    for(i=0;i<s.size();i++)
    {
      if(temp->nodes[s[i]-'a'] == NULL)
        return 0;

      cout<<temp->nodes[s[i]-'a']->a<<" ";
      temp = temp->nodes[s[i]-'a'];
    }

    if(temp->leaf)
      return 1;
    else
      return 0;
  }

  void printStack(vector<char> st, string s)
  {
    cout<<s;
    for(int i=1;i<st.size();i++)
    {
      cout<<st[i];
    }
    cout<<"\n";
  }

  void printRecursive(vector<char> st, node *temp, char a, string s)
  {
    int i;
    if(temp->leaf)
    {
      st.push_back(temp->a);
      printStack(st,s);
    }

    if(!temp->leaf)
      st.push_back(a);

    for(i=0;i<ALPHABET_NUM;i++)
    {
      if(temp->nodes[i]!=NULL)
      {
        printRecursive(st, temp->nodes[i], temp->nodes[i]->a,s);
      }
    }
  }

  void print(string s)
  {
    vector<char> st;
    node *temp = root;

    for(int i=0;i<s.size();i++)
    {
      if(temp->nodes[s[i]-'a']==NULL)
      {
        cout<<"Sorry No match"; return;
      }
      temp = temp->nodes[s[i]-'a'];
    }
    printRecursive(st, temp, '-', s);
  }

  void deleteRecursive(node *temp, string s, int i)
  {
    if(temp->leaf)
      return;

      if(temp->nodes[s[i]-'a']!=NULL)
      {
        deleteRecursive(temp->nodes[s[i]-'a'], s, i+1);
        temp->m[s[i]-'a']-=1;
        if(temp->m[s[i]-'a']==0)
        {
          // cout<<"Deleting "<<temp->a<<"\n";
          temp = NULL;
        }
      }
  }

  void remove(string s)
  {
    node *temp = root;
    deleteRecursive(temp, s, 0);
    this->search("dinesh");
    return;
  }
};

int main()
{
  trie tr;
  tr.insert("dinesh");
  tr.print(NULL);
}
