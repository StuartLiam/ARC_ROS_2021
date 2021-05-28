// Auto-generated. Do not edit!

// (in-package arc_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let ArcTaskActionGoal = require('./ArcTaskActionGoal.js');
let ArcTaskActionResult = require('./ArcTaskActionResult.js');
let ArcTaskActionFeedback = require('./ArcTaskActionFeedback.js');

//-----------------------------------------------------------

class ArcTaskAction {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.action_goal = null;
      this.action_result = null;
      this.action_feedback = null;
    }
    else {
      if (initObj.hasOwnProperty('action_goal')) {
        this.action_goal = initObj.action_goal
      }
      else {
        this.action_goal = new ArcTaskActionGoal();
      }
      if (initObj.hasOwnProperty('action_result')) {
        this.action_result = initObj.action_result
      }
      else {
        this.action_result = new ArcTaskActionResult();
      }
      if (initObj.hasOwnProperty('action_feedback')) {
        this.action_feedback = initObj.action_feedback
      }
      else {
        this.action_feedback = new ArcTaskActionFeedback();
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type ArcTaskAction
    // Serialize message field [action_goal]
    bufferOffset = ArcTaskActionGoal.serialize(obj.action_goal, buffer, bufferOffset);
    // Serialize message field [action_result]
    bufferOffset = ArcTaskActionResult.serialize(obj.action_result, buffer, bufferOffset);
    // Serialize message field [action_feedback]
    bufferOffset = ArcTaskActionFeedback.serialize(obj.action_feedback, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type ArcTaskAction
    let len;
    let data = new ArcTaskAction(null);
    // Deserialize message field [action_goal]
    data.action_goal = ArcTaskActionGoal.deserialize(buffer, bufferOffset);
    // Deserialize message field [action_result]
    data.action_result = ArcTaskActionResult.deserialize(buffer, bufferOffset);
    // Deserialize message field [action_feedback]
    data.action_feedback = ArcTaskActionFeedback.deserialize(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += ArcTaskActionGoal.getMessageSize(object.action_goal);
    length += ArcTaskActionResult.getMessageSize(object.action_result);
    length += ArcTaskActionFeedback.getMessageSize(object.action_feedback);
    return length;
  }

  static datatype() {
    // Returns string type for a message object
    return 'arc_msgs/ArcTaskAction';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '49452b4241bfa0f518631642b87604b7';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    
    ArcTaskActionGoal action_goal
    ArcTaskActionResult action_result
    ArcTaskActionFeedback action_feedback
    
    ================================================================================
    MSG: arc_msgs/ArcTaskActionGoal
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    
    Header header
    actionlib_msgs/GoalID goal_id
    ArcTaskGoal goal
    
    ================================================================================
    MSG: std_msgs/Header
    # Standard metadata for higher-level stamped data types.
    # This is generally used to communicate timestamped data 
    # in a particular coordinate frame.
    # 
    # sequence ID: consecutively increasing ID 
    uint32 seq
    #Two-integer timestamp that is expressed as:
    # * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
    # * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
    # time-handling sugar is provided by the client library
    time stamp
    #Frame this data is associated with
    # 0: no frame
    # 1: global frame
    string frame_id
    
    ================================================================================
    MSG: actionlib_msgs/GoalID
    # The stamp should store the time at which this goal was requested.
    # It is used by an action server when it tries to preempt all
    # goals that were requested before a certain time
    time stamp
    
    # The id provides a way to associate feedback and
    # result message with specific goal requests. The id
    # specified must be unique.
    string id
    
    
    ================================================================================
    MSG: arc_msgs/ArcTaskGoal
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    #Any task being done by the Task Handler will have the form of this action. This is essentially the TaskRequest.msg except trimmed down to only include parameters. the TaskHandler doesn't care about a tasks id and status, just the task to be done and the info regarding it.
    
    #Goal parameters. Specified at runtime. If you are trying to pass complex data to a task (list of points/etc), you will have to encode it as a string, or however you'd like.
    int32 task_id
    dynamic_reconfigure/Config parameters
    
    ================================================================================
    MSG: dynamic_reconfigure/Config
    BoolParameter[] bools
    IntParameter[] ints
    StrParameter[] strs
    DoubleParameter[] doubles
    GroupState[] groups
    
    ================================================================================
    MSG: dynamic_reconfigure/BoolParameter
    string name
    bool value
    
    ================================================================================
    MSG: dynamic_reconfigure/IntParameter
    string name
    int32 value
    
    ================================================================================
    MSG: dynamic_reconfigure/StrParameter
    string name
    string value
    
    ================================================================================
    MSG: dynamic_reconfigure/DoubleParameter
    string name
    float64 value
    
    ================================================================================
    MSG: dynamic_reconfigure/GroupState
    string name
    bool state
    int32 id
    int32 parent
    
    ================================================================================
    MSG: arc_msgs/ArcTaskActionResult
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    
    Header header
    actionlib_msgs/GoalStatus status
    ArcTaskResult result
    
    ================================================================================
    MSG: actionlib_msgs/GoalStatus
    GoalID goal_id
    uint8 status
    uint8 PENDING         = 0   # The goal has yet to be processed by the action server
    uint8 ACTIVE          = 1   # The goal is currently being processed by the action server
    uint8 PREEMPTED       = 2   # The goal received a cancel request after it started executing
                                #   and has since completed its execution (Terminal State)
    uint8 SUCCEEDED       = 3   # The goal was achieved successfully by the action server (Terminal State)
    uint8 ABORTED         = 4   # The goal was aborted during execution by the action server due
                                #    to some failure (Terminal State)
    uint8 REJECTED        = 5   # The goal was rejected by the action server without being processed,
                                #    because the goal was unattainable or invalid (Terminal State)
    uint8 PREEMPTING      = 6   # The goal received a cancel request after it started executing
                                #    and has not yet completed execution
    uint8 RECALLING       = 7   # The goal received a cancel request before it started executing,
                                #    but the action server has not yet confirmed that the goal is canceled
    uint8 RECALLED        = 8   # The goal received a cancel request before it started executing
                                #    and was successfully cancelled (Terminal State)
    uint8 LOST            = 9   # An action client can determine that a goal is LOST. This should not be
                                #    sent over the wire by an action server
    
    #Allow for the user to associate a string with GoalStatus for debugging
    string text
    
    
    ================================================================================
    MSG: arc_msgs/ArcTaskResult
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    bool completed		#Whether or not the task was completed.
    int32 task_id #we need to know the id when tasks is returning, since multiple instances of the same task type may return to same callback in task handler. If we don't know the tasks id, we won't be sure what instance it is, and the callback only receives Result info, which doesn't include the task_id outlined for this actions goal.
    string final_state 	#Since tasks are based on a state machine, this can contain the final state that was reached upon completion/termination.
    
    ================================================================================
    MSG: arc_msgs/ArcTaskActionFeedback
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    
    Header header
    actionlib_msgs/GoalStatus status
    ArcTaskFeedback feedback
    
    ================================================================================
    MSG: arc_msgs/ArcTaskFeedback
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    #no feedback message yet
    
    
    
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new ArcTaskAction(null);
    if (msg.action_goal !== undefined) {
      resolved.action_goal = ArcTaskActionGoal.Resolve(msg.action_goal)
    }
    else {
      resolved.action_goal = new ArcTaskActionGoal()
    }

    if (msg.action_result !== undefined) {
      resolved.action_result = ArcTaskActionResult.Resolve(msg.action_result)
    }
    else {
      resolved.action_result = new ArcTaskActionResult()
    }

    if (msg.action_feedback !== undefined) {
      resolved.action_feedback = ArcTaskActionFeedback.Resolve(msg.action_feedback)
    }
    else {
      resolved.action_feedback = new ArcTaskActionFeedback()
    }

    return resolved;
    }
};

module.exports = ArcTaskAction;