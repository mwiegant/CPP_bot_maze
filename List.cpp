// List data structure


class ListNode
{
public:
	ListNode(int yCord, int xCord, ListNode* next);
	~ListNode();
	bool getCordinates(int& yCord, int& xCord);
	ListNode* getNext();
private:
	int _yCord;
	int _xCord;
	ListNode* _next;
};



class List
{
public:
	List();
	~List();
	bool pushNode(int yCord, int xCord);
	bool popNode(int& yCord, int& xCord);

private:
	ListNode* start = NULL;

};