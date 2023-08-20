#include "CandidateType.h"

CandidateType::CandidateType() {
	totalVotes = 0;
}
void CandidateType::updateVotesByCampus(int index, int numberVotes) {
	totalVotes += numberVotes;
	campus[index] += numberVotes;
}
const int CandidateType::getTotalVotes() {
	return totalVotes;
}
const int CandidateType::getVotesByCampus(int index) {
	return campus[index];
}
void CandidateType::printCandidateInfo() {
	printSSN();
	std::cout << " " << "-" << " ";
	printName();
}
void CandidateType::printCandidateTotalVotes() {
	std::cout << std::endl;
	std::cout << "   => Total Votes (all campuses): " << getTotalVotes();
}
void CandidateType::printCandidateCampusVotes(int index) {
	std::cout << std::endl;
	std::cout << "   => Campus " << index << " total votes: " << getVotesByCampus(index);
}
CandidateType::~CandidateType() {
}