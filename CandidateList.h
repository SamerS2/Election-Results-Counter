#ifndef CANDIDATELIST_H
#define CANDIDATELIST_H
#include "CandidateType.h"
#include "Node.h"

class CandidateList : public CandidateType {
private:
public:
	CandidateList();
	void addCandidate(CandidateType& obj);
	const int getWinner();
	bool searchCandidate(int SSN);
	void printCandidateName(int SSN);
	void printAllCandidates();
	void printCandidateCampusVotes(int SSN, int division);
	void printCandidateTotalVotes(int ssn);
	void printFinalResults();
	void destroyList();
	~CandidateList();
protected:
	Node* first;//points to first node
	Node* last;//points to last node
	int count; // stores number of nodes
};
#endif