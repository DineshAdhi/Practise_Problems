#include<iostream>
#include<string.h>
#define ALPHABET_NUM 26
using namespace std;

class trienode
{
public:
  char a;
  trienode *nodes[ALPHABET_NUM];
  bool leaf;

  trienode()
  {
    leaf = false;
  }
};

class trie
{
public:
  trienode *root = new trienode();

  void insert(string s)
  {
    int i=0;

    trienode *temp = root;
    for(i=0; i<s.size(); i++)
    {
      if(temp->nodes[s[i]-'a']==NULL)
      {
        temp->nodes[s[i]-'a'] = new trienode();
        temp->nodes[s[i]-'a']->a = s[i];
        cout<<"Inserting "<<temp->nodes[s[i]-'a']->a<<" "<<s[i]-'a'<<"\n";
      }
      temp = temp->nodes[s[i]-'a'];
    }

    temp->leaf = true;
  }

  void search(string s)
  {
    int i;
    trienode *temp = root;
    for(i=0; i<s.size();i++)
    {
      if(temp->nodes[s[i]-'a']==NULL)
      {
        cout<<"Cant find "<<s[i]<<"  Not found\n"; return;
      }

      temp = temp->nodes[s[i]-'a'];
    }

    if(temp->leaf == true)
    {
          cout<<"Found\n";
          return;
    }

    cout<<"Not found\n";
    return;
  }
};

int main()
{
  trie t;
  t.insert("dinesh");
  t.search("dines");
}
