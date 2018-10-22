//
// Generated file, do not edit! Created by nedtool 4.6 from inet/applications/mqttapp/mqttMessages/MqttMsgPublish.msg.
//

#ifndef _INET_MQTTMSGPUBLISH_M_H_
#define _INET_MQTTMSGPUBLISH_M_H_

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0406
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif


namespace inet {

/**
 * Class generated from <tt>inet/applications/mqttapp/mqttMessages/MqttMsgPublish.msg:21</tt> by nedtool.
 * <pre>
 * //
 * // TODO generated message class
 * //
 * packet MqttMsgPublish
 * {
 *     string clientID;
 *     string topic;
 *     string mqttMessage;
 *     int qoS;
 *     int MIPSRequired;
 *     double requiredTime;
 *     string messageID;
 * }
 * </pre>
 */
class MqttMsgPublish : public ::cPacket
{
  protected:
    opp_string clientID_var;
    opp_string topic_var;
    opp_string mqttMessage_var;
    int qoS_var;
    int MIPSRequired_var;
    double requiredTime_var;
    opp_string messageID_var;

  private:
    void copy(const MqttMsgPublish& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const MqttMsgPublish&);

  public:
    MqttMsgPublish(const char *name=NULL, int kind=0);
    MqttMsgPublish(const MqttMsgPublish& other);
    virtual ~MqttMsgPublish();
    MqttMsgPublish& operator=(const MqttMsgPublish& other);
    virtual MqttMsgPublish *dup() const {return new MqttMsgPublish(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual const char * getClientID() const;
    virtual void setClientID(const char * clientID);
    virtual const char * getTopic() const;
    virtual void setTopic(const char * topic);
    virtual const char * getMqttMessage() const;
    virtual void setMqttMessage(const char * mqttMessage);
    virtual int getQoS() const;
    virtual void setQoS(int qoS);
    virtual int getMIPSRequired() const;
    virtual void setMIPSRequired(int MIPSRequired);
    virtual double getRequiredTime() const;
    virtual void setRequiredTime(double requiredTime);
    virtual const char * getMessageID() const;
    virtual void setMessageID(const char * messageID);
};

inline void doPacking(cCommBuffer *b, MqttMsgPublish& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, MqttMsgPublish& obj) {obj.parsimUnpack(b);}

} // namespace inet

#endif // ifndef _INET_MQTTMSGPUBLISH_M_H_

