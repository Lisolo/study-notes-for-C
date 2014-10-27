/*
struct list_node
{
	struct list_node* prev;
	struct list_node* next;
	void* value;
};


typedef struct
{
	list_node* prev;
	list_node* next;
	void* value;
} list_node;
*/



typedef struct node_t
{
	struct node_t* prev;
	struct node_t* next;
	void* value;
} list_node;



typedef struct node_t
{
	struct node_t* prev;
	struct node_t* next;
	void* value;
} node_t;
