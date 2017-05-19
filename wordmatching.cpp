#include<iostream>
#include<vector>
#define ALPHABET_NUM 26
using namespace std;
class node
{
public:
  char a;
  node *nodes[ALPHABET_NUM];
  bool leaf;

  node()
  {
  for(int i=0;i<ALPHABET_NUM;i++)
    nodes[i] = NULL;
  a = '-';
  leaf = false;
  }

};

class trie
{
public:
  node *root;
  int i;

  trie()
  {
    root = new node();
  }

  void insert(string s)
  {
    node *temp = root;
    for(i=0; i<s.size();i++)
    {
      if(temp->nodes[s[i]-'a']==NULL)
      {
        temp->nodes[s[i]-'a'] = new node();
      }
      temp->nodes[s[i]-'a']->a=s[i];
      temp = temp->nodes[s[i]-'a'];
    }

    temp->leaf = true;
  }

  int search(string s)
  {
    node *temp = root;

    for(i=0;i<s.size();i++)
    {
      if(temp->nodes[s[i]-'a'] == NULL)
        return 0;

      temp = temp->nodes[s[i]-'a'];
    }

    return temp->leaf;
  }

  void printRecursive(node *temp[], int s)
  {
      cout<<temp[s]->a;

      for(i=0;i<ALPHABET_NUM;i++)
      {
        if(temp[s]->nodes[i]!=NULL)
        {
          printRecursive(temp[s]->nodes, i);
        }
      }
  }


  int generatePossibleStrings(string s)
  {
    node *temp = root;
      for(i=0;i<s.size();i++)
      {
        if(temp->nodes[s[i]-'a'] == NULL)
        {
          cout<<"Sorry No possbile strings\n";
          return 0;
        }

        temp = temp->nodes[s[i]-'a'];
      }

    for(int k=0;k<26;k++)
    {
      if(temp->nodes[k]!=NULL)
      {
        cout<<s; printRecursive(temp->nodes, k);
        cout<<"\n";
      }
    }
    return 1;
  }
};

int main()
{
  trie tr; tr.insert("dineshharish");
  tr.insert("dineshadhithya");
  tr.insert("dinesh");
  string s;
  cin>>s;
  tr.generatePossibleStrings(s);
}
