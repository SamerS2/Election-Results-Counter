#include "CandidateList.h"

CandidateList::CandidateList()
{
	first = nullptr;
	last = nullptr;
	count = 0;
}

void CandidateList::addCandidate(CandidateType& obj)
{
	Node* newNode = new Node();

	newNode->setCandidate(obj);
	if (first == nullptr)
	{
		first = newNode;
		last = newNode;
		count++;
	}
	else {
		last->setLink(newNode);
		this->last = newNode;
		count++;
	}
}

const int CandidateList::getWinner()
{
	if (first == nullptr) {
		std::cout << "=> List is empty\n";
		return 0;
	}
	Node* link = first;
	Node* temp = first;
	while (link->getLink() != nullptr) {
		if (link->getCandidate().getTotalVotes() > temp->getCandidate().getTotalVotes()) {
			temp = link;
		}
		link = link->getLink();
	}
	return temp->getCandidate().getSSN();
}

bool CandidateList::searchCandidate(int SSN)
{
	if (first == nullptr) {
		std::cout << "=> List is empty\n";
		return false;
	}
	Node* link = first;
	while (link->getLink() != nullptr) {
		link = link->getLink();
		if (link->getCandidate().getSSN() == SSN) {
			return true;
		}
	}
	std::cout << "=> SSN not in the list\n";
	return false;
}

void CandidateList::printCandidateName(int SSN)
{
	if (first == nullptr) {
		std::cout << "=> List is empty\n";
	}
	Node* link = first;
	while (link != nullptr) {
		if (link->getCandidate().getSSN() == SSN) {
			link->getCandidate().printName();
			return;
		}
		link = link->getLink();
	}
	std::cout << "=> SSN not in the list\n";
}

void CandidateList::printAllCandidates()
{
	if (first == nullptr) {
		std::cout << "=> List is empty\n";
	}
	Node* link = first;
	while (link != nullptr) {
		link->getCandidate().printCandidateInfo();
		std::cout << std::endl;
		link = link->getLink();
	}
}

void CandidateList::printCandidateCampusVotes(int SSN, int division)
{
	if (first == nullptr) {
		std::cout << "=> List is empty\n";
	}
	Node* link = first;
	while (link != nullptr) {
		if (link->getCandidate().getSSN() == SSN)
		{
			link->getCandidate().printCandidateCampusVotes(division);
			return;
		}
		link = link->getLink();
	}
}
void CandidateList::printCandidateTotalVotes(int ssn) {
	if (first == nullptr) {
		std::cout << "=> List is empty\n";
	}
	Node* link = first;
	while (link != nullptr) {
		if (link->getCandidate().getSSN() == ssn) {
			link->getCandidate().printCandidateTotalVotes();
			return;
		}
		link = link->getLink();
	}
}
void CandidateList::destroyList() {
	Node* link = first;
	while (link != nullptr) {
		first = link->getLink();
		free(link);
		link = first;
	}
}
void CandidateList::printFinalResults() {
	Node* link = first;
	while (link != nullptr) {
		link->getCandidate().printName();
		link->getCandidate().printCandidateTotalVotes();
		std::cout << std::endl;
		link = link->getLink();
	}
}
CandidateList::~CandidateList()
{
	destroyList();
}