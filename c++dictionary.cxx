#include<iostream>
#include<string>
#include<map>

using namespace std;

int main(){
	string word;
	
	cout<< "ENTER AN ENGINEERING WORD: ";
	cin>>word;
	
	map<string, string>Engineering_dictionary={
		{"AMPERE", "it is a unit that measures the flow of an electric circuit"},
		{"BEAM", "a piece of wood, metal, or concrete to support weight"},
		{"BRIDGE", "structure that is made as a way for transportation"},
		{"CALCULUS", "a branch of mathematics that studies rates of change and motion"},
		{"CAPACITY", "Normal ability to produce steel in a given period"}, 
		{"CIRCUIT", "It is a closed wires in which an electricity can flow"},
		{"CIVIL ENGINEERING", "Building structures and maintains physical enviroment"},
		{"CHEMICAL", "it is an interaction of substance in Chemistry"},
		{"COMPUTER", "programmable device that stores, retreives, and process data"},
		{"COMPUTER ENGINEERING", "specialized in developingcomputer hardware and software"},
		{"CONTRACTION", "it is the expanding of an object due to temperature changes"},
		{"DESIGN", "it is the process of creating structures of a building"},
		{"ELECTRICAL ENGINEERING", "application of electricity and electronics"},
		{"ELECTRICITY", "energy that results from the movement of electrons between atoms"},
		{"ENERGY", "it is the ability to do work"},
		{"ENGINEERING", "practice of using science, mathematics, and the engineering design process to increase effeciency and productivity"},
		{"FREQUENCY" , "it is the number of occurrences of a repeating event per unit of time"}, 
		{"GENERATOR", "the combination of an electrical generator and the steam turbine drive it to produce energy"},
		{"HEAT", "it has the capacity to increase the temperature of a substance"},
		{"HERTZ", "It is the unit of frequency"},
		{"JOULE", "it is the unit of work or energy"},
		{"LINUX", "used as an embedded OS for a variety of applications"},
		{"MACHINE", "technology that applies mechanical force or power"},
		{"MATHEMATICS", "is the science and study of quality, structure, space, and change"},
		{"MECHANICAL ENGINEERING", "study of machines that uses force and movement"},
		{"PHYSICS", "study of matter, energy, force, and motion"},
		{"STRUCTURAL ENGINEERING", "a system of interconnected members used to support external loads"},
		{"TENSILE TEST", "destructive mechanical test whereby strength and ductility properties are measured"},
		{"VOLTAGE", "unit that describes the difference in potential between two points in a circuit"},
		{"WELDING", "it is the process of joining metals by using or applying heat"}
	};
	
	if(Engineering_dictionary.find(word)!=Engineering_dictionary.end()){
		cout<<"DEFINITION/MEANING: "<<Engineering_dictionary[word]<<endl;
	}else{
		cout<<"Word not found"<<endl;
	}
	
	return 0;
}