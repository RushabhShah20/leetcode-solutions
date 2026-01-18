// Problem: Design Auction System
// Link to the problem: https://leetcode.com/problems/design-auction-system/
class AuctionSystem
{
public:
    unordered_map<int, set<pair<int, int>>> o;
    unordered_map<int, unordered_map<int, int>> u;
    AuctionSystem() {}

    void addBid(int userId, int itemId, int bidAmount)
    {
        if (u[itemId].count(userId))
        {
            int oldAmount = u[itemId][userId];
            o[itemId].erase({oldAmount, userId});
        }
        u[itemId][userId] = bidAmount;
        o[itemId].insert({bidAmount, userId});
    }

    void updateBid(int userId, int itemId, int newAmount)
    {
        int oldAmount = u[itemId][userId];
        o[itemId].erase({oldAmount, userId});
        u[itemId][userId] = newAmount;
        o[itemId].insert({newAmount, userId});
    }

    void removeBid(int userId, int itemId)
    {
        int currentAmount = u[itemId][userId];
        o[itemId].erase({currentAmount, userId});
        u[itemId].erase(userId);
    }

    int getHighestBidder(int itemId)
    {
        if (o.find(itemId) == o.end() || o[itemId].empty())
        {
            return -1;
        }
        return o[itemId].rbegin()->second;
    }
};

/**
 * Your AuctionSystem object will be instantiated and called as such:
 * AuctionSystem* obj = new AuctionSystem();
 * obj->addBid(userId,itemId,bidAmount);
 * obj->updateBid(userId,itemId,newAmount);
 * obj->removeBid(userId,itemId);
 * int param_4 = obj->getHighestBidder(itemId);
 */