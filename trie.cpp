#include<iostream>
#include<string.h>
#define ALPHABET_NUM 26
using namespace std;

class trienode
{
public:
  char a;
  trienode *nodes[ALPHABET_NUM];
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

    cout<<"Found\n";
    return;
  }
};

int main()
{
  trie t;
  t.insert("dinesh");
  t.search("dinesh");
  t.insert("balle");
  t.search("dinesh");
  t.search("balleh");
}
