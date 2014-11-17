#include <inttypes.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "answer10.h"

/* This struct will hold the data read from the file. */
typedef struct m_TempData
{
	int businessID;
	char * name;
	char * address;
	char * city;
	char * state;
	char * zipCode;
} TempData;

/* This struct will hold the review information about a specific store */ 
typedef struct m_BusinessNode
{
	long int reviews;
	int numReviews;
} BusinessNode;

static BusinessNode * CreateBusinessNode(TempData data)
{
	return NULL;
}

/* This struct will hold information about businesses before the other trees are built. */
typedef struct m_LocalBusiness
{
	char * city;
	char * address;
	BusinessNode * reviews;
} LocalBusiness;

/* This tree will be built during a query. */
typedef struct m_AddressTree
{
	char * address;
	BusinessNode * reviews;
	struct m_AddressTree * left;
	struct m_AddressTree * right;
} AddressTree;

static AddressTree * CreateAddressTree(LocalBusiness * data)
{
	AddressTree * tree = malloc(sizeof(AddressTree));
	strcpy(tree->address, data->address);
	//tree->reviews = CreateBusinessNode(data)
	tree->left = NULL;
	tree->right = NULL;

	return tree;
}

static void DeconstructAddressTree(AddressTree * tree)
{
	if (tree == NULL)
		return;
	DeconstructAddressTree(tree->left);
	DeconstructAddressTree(tree->right);
	free(tree->address);
	free(tree);
}

/* This tree will be built during a query. */
typedef struct m_CityTree
{
	char * city;
	AddressTree * addressTree;
	struct m_CityTree * left;
	struct m_CityTree * right;
} CityTree;

static CityTree * CreateCityTree(LocalBusiness * data)
{
	CityTree * tree = malloc(sizeof(CityTree));
	strcpy(tree->city, data->city);
	tree->left = NULL;
	tree->right = NULL;

	return tree;
}

static void DeconstructCityTree(CityTree * tree)
{
	if (tree == NULL)
		return;
	DeconstructCityTree(tree->left);
	DeconstructCityTree(tree->right);
	free(tree->city);
	free(tree);
}

/* This tree will be built during the create_business_bst() function. */
typedef struct m_ZipCodesTree
{
	char * zipcode;
	LocalBusiness * localBusinesses;
	struct m_ZipCodesTree * left;
	struct m_ZipCodesTree * right;
} ZipCodesTree;

static ZipCodesTree * CreateZipCodeTree(TempData * data)
{
	ZipCodesTree * tree = malloc(sizeof(ZipCodesTree));
	strcpy(tree->zipcode, data->zipCode);
	//tree->localBusinesses = CreateLocalBusiness(TempData data);
	tree->left = NULL;
	tree->right = NULL;

	return tree;
}

static void DeconstructZipCodeTree(ZipCodesTree * tree)
{
	if (tree == NULL)
		return;
	DeconstructZipCodeTree(tree->left);
	DeconstructZipCodeTree(tree->right);
	free(tree->zipcode);
	free(tree);
}

/* This tree will be built during the create_business_bst() function. */
typedef struct m_StatesTree
{
	char * state;
	ZipCodesTree * zipCodeTree;
	struct m_StatesTree * left;
	struct m_StatesTree * right;
} StatesTree;

/* This tree will be built during the create_business_bst() function. */
typedef struct m_YelpDataBST
{
	char * name;
	StatesTree * stateTree;
	struct m_YelpDataBST * left;
	struct m_YelpDataBST * right;
} YelpDataBST;

struct YelpDataBST* create_business_bst(const char* businesses_path,
	const char* reviews_path)
{
	return NULL;
}

struct Business* get_business_reviews(struct YelpDataBST* bst,
	char* name, char* state, char* zip_code)
{
	return NULL;
}

void destroy_business_bst(struct YelpDataBST* bst)
{

}

void destroy_business_result(struct Business* b)
{

}