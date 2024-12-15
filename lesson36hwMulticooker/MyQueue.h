#pragma once
#include <iostream>
using namespace std;

namespace myQueue {
	template <typename T>
	class Node {
	public:
		T info;
		Node* next;
		Node* prev;

		Node(T value) {
			info = value;
			next = prev = nullptr;
		}
	};

	//Queueue - FIFO = first in, first out
	template <typename U>
	class Queue {
	protected:
		Node<U>* head;
		Node<U>* current;
	public:
		Queue() {
			head = current = nullptr;
		}
		~Queue() {
			while (!isEmpty())
			{
				pop_front();
			}
		}//���������

		bool isEmpty()const { return (head == nullptr); }//���������
		U first()const {
			if (isEmpty()) throw "MyQueue is empty";
			return head->info;
		}//���������

		void push_back(U value) {
			Node<U>* el = new Node<U>(value);

			if (isEmpty()) {
				head = current = el;
			}
			else {
				current->next = el;
				el->prev = current;
				current = el;
			}
		}//���������
		void pop_front() {
			if (!isEmpty()) {
				if (head != current) { // size != 1 //or head->next != nullptr
					head = head->next;
					delete head->prev;
					head->prev = nullptr;
				}
				else { //size == 1
					delete head;
					head = current = nullptr;
				}
			}
		}//���������

		void show()const {
			Node<U>* p = head;
			if (isEmpty()) cout << "MyQueue is empty" << endl;
			else {
				while (p != nullptr)
				{
					//cout << p->info << " ";

					//cout << "\tPrev:" << p->prev << endl;
					//cout << "\tNext:" << p->next << endl;

					p = p->next;

				}
				cout << endl;
			}

		}//���������
	};
}
