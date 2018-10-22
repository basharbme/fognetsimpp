//
// Generated file, do not edit! Created by nedtool 4.6 from inet/applications/mqttapp/mqttMessages/MqttMsgSubscribe.msg.
//

#ifndef _INET_MQTTMSGSUBSCRIBE_M_H_
#define _INET_MQTTMSGSUBSCRIBE_M_H_

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0406
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif


namespace inet {

/**
 * Class generated from <tt>inet/applications/mqttapp/mqttMessages/MqttMsgSubscribe.msg:21</tt> by nedtool.
 * <pre>
 * //
 * // TODO generated message class
 * //
 * packet MqttMsgSubscribe
 * {
 *     string clientID;
 *     string topic;
 *     int qos;
 * }
 * </pre>
 */
class MqttMsgSubscribe : public ::cPacket
{
  protected:
    opp_string clientID_var;
    opp_string topic_var;
    int qos_var;

  private:
    void copy(const MqttMsgSubscribe& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const MqttMsgSubscribe&);

  public:
    MqttMsgSubscribe(const char *name=NULL, int kind=0);
    MqttMsgSubscribe(const MqttMsgSubscribe& other);
    virtual ~MqttMsgSubscribe();
    MqttMsgSubscribe& operator=(const MqttMsgSubscribe& other);
    virtual MqttMsgSubscribe *dup() const {return new MqttMsgSubscribe(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual const char * getClientID() const;
    virtual void setClientID(const char * clientID);
    virtual const char * getTopic() const;
    virtual void setTopic(const char * topic);
    virtual int getQos() const;
    virtual void setQos(int qos);
};

inline void doPacking(cCommBuffer *b, MqttMsgSubscribe& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, MqttMsgSubscribe& obj) {obj.parsimUnpack(b);}

} // namespace inet

#endif // ifndef _INET_MQTTMSGSUBSCRIBE_M_H_

