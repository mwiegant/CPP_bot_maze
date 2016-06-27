// List data structure implementation

#include "List.cpp"


/*
 *	LIST NODE  -  IMPLEMENTATION
 */
ListNode::ListNode(int yCord, int xCord, ListNode* next)
{

}


ListNode::~ListNode()
{

}

bool ListNode::getCordinates(int& yCord, int& xCord)
{
	yCord = _yCord;
	xCord = _xCord;
	return true;
}

ListNode* ListNode::getNext()
{
	return next;
}



/*
 *	LIST  -  IMPLEMENTATION
 */
List::List()
{

}

List::~List()
{

}

bool List::pushNode(int yCord, int xCord)
{
	ListNode* temp = NULL;

	// check if empty
	if( start == NULL )
	{
		start = new ListNode(yCord, xCord, NULL);
	}
	else
	{
		temp = start.getNext();

		// loop through nodes in the list until I find the last one
		while( temp != NULL)
		{
			temp = temp.getNext();
		}

		temp = new ListNode
	}


	return true;
}

bool List::popNode(int& yCord, int& xCord)
{

	return true;
}






