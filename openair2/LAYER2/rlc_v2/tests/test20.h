/*
 * rlc am test full tx window
 * for that eNB sends a lot of small PDUs
 */
TIME, 1,
    ENB_AM, 100000, 100000, 35, 0, 45, -1, -1, 4,
    UE_AM, 100000, 100000, 35, 0, 45, -1, -1, 4,
    ENB_SDU, 0, 513,
    ENB_PDU_SIZE, 3,
    ENB_RECV_FAILS, 1,
    ENB_BUFFER_STATUS,
TIME, 511,
    UE_BUFFER_STATUS,
TIME, 512,
    UE_BUFFER_STATUS,
TIME, 513,
    UE_BUFFER_STATUS,
TIME, 557,
    ENB_BUFFER_STATUS,
TIME, 558,
    ENB_BUFFER_STATUS,
TIME, 559,
    ENB_BUFFER_STATUS,
TIME, 600,
    ENB_BUFFER_STATUS,
    ENB_RECV_FAILS, 0,
TIME, -1

