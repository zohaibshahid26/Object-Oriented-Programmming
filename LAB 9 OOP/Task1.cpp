#include<iostream>
using namespace std;
class Novel
{
	string title;
	string author;
	int pages;
public:
	Novel()
	{
		title = "";
		author = "";
		pages = 0;

	}
	Novel(string t, string a, int p)
	{
		title = t;
		author = a;
		pages = p;
	}
	void set_title(string t)
	{
		title = t;
	}
	void set_author(string a)
	{
		author = a;
	}
	void set_pages(int p)
	{
		pages = p;
	}
	string get_title() const
	{
		return title;
	}
	string get_author() const
	{
		return author;
	}
	int get_pages() const
	{
		return pages;
	}	
	void showDetails() const
	{
		cout << "Title: " << title << endl;
		cout << "Author: " << author << endl;
		cout << "Pages: " << pages << endl;
	}
};



class Fiction :public Novel  //Fiction Class inherited from novel
{
	int level;
	string type;
public:
	Fiction()
	{
		level = 0;
		type = "";
	}
	void setLevel(int l)
	{
		level = l;
	}

	void setType(string t)
	{
		type = t;
	}


	int getLevel() const
	{
		return level;
	}
	string  getType() const
	{
		return type;
	}
	
	
	Fiction(string t, string a, int p, int l, string ty) :Novel(t, a, p)
	{
		level = l;
		type = ty;
	}
	void showDetails() const
	{
		Novel::showDetails();
		cout << "Level: " << level << endl;
		cout << "Type: " << type << endl;
	}

	
};


class NonFiction : public Novel  //Non-Fiction class imherited from the novel
{

	string Inspiration;
	
public:
	NonFiction()
	{
		Inspiration = "";
	}
	void setData(string t,string a,int p,string i)
	{
		Inspiration = i;
		set_title(t);
		set_author(a);
		set_pages(p);
	}
	string getInspiration() const
	{
		return Inspiration;
	}
	NonFiction(string t, string a, int p, string i) :Novel(t, a, p)
	{
		Inspiration = i;
	}
	void showDetails() const
	{
		Novel::showDetails();
		cout << "Inspiration: " << Inspiration << endl;
	}
};



int main()
{
	cout << "Fiction: " << endl;
	Fiction f("Merchant of Venice","William Shakespaere", 173, 1, "Comedy");
	f.showDetails();

	cout << endl;
	cout << "NonFiction: " << endl;
	NonFiction nf;
	nf.setData("Hiroshima", "John Herrsey", 160, "It tells the stories of six survivors of the atomic bomb dropped on Hiroshima.");

	nf.showDetails();
	return 0;
	
}
