
#pragma once
#include "OSC\udp.hh"
#include "OSC\oscpkt.hh"


#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <string>

static class OSCManager
{

  public:
	static void send(const std::string &package, const std::string &content) {
		oscpkt::Message msg;
		sendPacket(msg.init(package).pushStr(content));
	}

	static void send(const std::string &package,float f) {
		oscpkt::Message msg;
		sendPacket(msg.init(package).pushFloat(f));
	}

	static void send(const std::string &package,int i) {
		oscpkt::Message msg;
		sendPacket(msg.init(package).pushInt32(i));
	}

	static void sendRotation(float y, float p, float r) {
		oscpkt::Message msg;
		sendPacket(msg.init("/rotation").pushFloat(y).pushFloat(p).pushFloat(r));
	}

	static bool sendPacket(const oscpkt::Message& msg) {
		oscpkt::UdpSocket sock2; 
		oscpkt::PacketWriter wr;

		wr.addMessage(msg);
		sock2.connectTo("localhost", "9001");
		if (sock2.isOk()) {
			if (sock2.sendPacket(wr.packetData(), wr.packetSize())) {
				return true;
			}
		} 
		return false;
	}
};
