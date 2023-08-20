#ifndef CANDIDATETYPE_H
#define CANDIDATETYPE_H
#include "PersonType.h"

const int NUM_OF_CAMPUSES = 4;

class CandidateType : public PersonType{
private:
public:
	CandidateType();
	void updateVotesByCampus(int index, int numberVotes);
	const int getTotalVotes();
	const int getVotesByCampus(int index);
	void printCandidateInfo();
	void printCandidateTotalVotes();
	void printCandidateCampusVotes(int index);
	~CandidateType();
protected:
	int totalVotes;
	int campus[NUM_OF_CAMPUSES] = {0};
};
#endif
