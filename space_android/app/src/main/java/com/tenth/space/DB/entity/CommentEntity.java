package com.tenth.space.DB.entity;

// THIS CODE IS GENERATED BY greenDAO, EDIT ONLY INSIDE THE "KEEP"-SECTIONS

// KEEP INCLUDES - put your custom includes here
// KEEP INCLUDES END
/**
 * Entity mapped to table CommentInfo.
 */
public class CommentEntity {

    private Long id;
    private int commentId;
    private int fromSessionId;
    /** Not-null value. */
    private String msgData;
    /** Not-null value. */
    private String msgType;
    private String avatarUrl;
    private String nickName;
    private Long writer_user_id;
    private int created;
    private int updated;

    // KEEP FIELDS - put your custom fields here
    // KEEP FIELDS END

    public CommentEntity() {
    }

    public CommentEntity(Long id) {
        this.id = id;
    }

    public CommentEntity(Long id, int commentId, int fromSessionId, String msgData, String msgType, String avatarUrl, String nickName, Long writer_user_id, int created, int updated) {
        this.id = id;
        this.commentId = commentId;
        this.fromSessionId = fromSessionId;
        this.msgData = msgData;
        this.msgType = msgType;
        this.avatarUrl = avatarUrl;
        this.nickName = nickName;
        this.writer_user_id = writer_user_id;
        this.created = created;
        this.updated = updated;
    }

    public Long getId() {
        return id;
    }

    public void setId(Long id) {
        this.id = id;
    }

    public int getCommentId() {
        return commentId;
    }

    public void setCommentId(int commentId) {
        this.commentId = commentId;
    }

    public int getFromSessionId() {
        return fromSessionId;
    }

    public void setFromSessionId(int fromSessionId) {
        this.fromSessionId = fromSessionId;
    }

    /** Not-null value. */
    public String getMsgData() {
        return msgData;
    }

    /** Not-null value; ensure this value is available before it is saved to the database. */
    public void setMsgData(String msgData) {
        this.msgData = msgData;
    }

    /** Not-null value. */
    public String getMsgType() {
        return msgType;
    }

    /** Not-null value; ensure this value is available before it is saved to the database. */
    public void setMsgType(String msgType) {
        this.msgType = msgType;
    }

    public String getAvatarUrl() {
        return avatarUrl;
    }

    public void setAvatarUrl(String avatarUrl) {
        this.avatarUrl = avatarUrl;
    }

    public String getNickName() {
        return nickName;
    }

    public void setNickName(String nickName) {
        this.nickName = nickName;
    }

    public Long getWriter_user_id() {
        return writer_user_id;
    }

    public void setWriter_user_id(long writer_user_id) {
        this.writer_user_id = writer_user_id;
    }

    public int getCreated() {
        return created;
    }

    public void setCreated(int created) {
        this.created = created;
    }

    public int getUpdated() {
        return updated;
    }

    public void setUpdated(int updated) {
        this.updated = updated;
    }

    // KEEP METHODS - put your custom methods here
    // KEEP METHODS END

}